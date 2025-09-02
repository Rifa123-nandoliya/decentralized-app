import re

def extract_references(text: str):
    references = []
    lines = text.strip().split("\n")
    pattern_number = r"^\d+\."               
    pattern_authors = r"\s*(.+?)\s*"         
    pattern_year = r"\((\d{4})\)\."          
    pattern_title = r"\s*(.+?)\.\s*"         
    pattern_source = r"(.+)\.$"             
    full_pattern = pattern_number + pattern_authors + pattern_year + pattern_title + pattern_source
    for line in lines:
        match = re.match(full_pattern, line)
        if match:
            authors, year, title, source = match.groups()
            references.append({
                "authors": authors,
                "year": int(year),
                "title": title,
                "source": source
            })
    return references
input_text = """
1. Smith, J., & Brown, P. (2021). Deep Learning for Image Recognition. Journal of AI Research.
2. Lee, K. (2019). Advances in Natural Language Processing. Springer.
3. Johnson, R., & Wang, T. (2020). Data Mining Techniques: A Review. ACM Transactions on Data Science.
"""
structured_output = extract_references(input_text)
for ref in structured_output:
    print(ref)
