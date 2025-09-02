import re
def transform_text(input_text: str) -> str:
    text = re.sub(r"\d{10,}", "[REDACTED]", input_text)
    text = re.sub(r"(\d{4})-(\d{2})-(\d{2})", r"\3/\2/\1", text)
    text = text.replace("Python", "🐍")
    text=text.replace(":)","😊")
    return text
input_text = """Call me at 9812345678 on 2025-08-23.
I love Python more than Java :)"""
print(transform_text(input_text))
