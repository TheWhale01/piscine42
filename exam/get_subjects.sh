git clone "https://github.com/barimehdi77/42-piscine-exam.git"
find . -type d -print -exec mv {} ./ \;
rm -rf "42-piscine-exam"
find . -name "*.c" -print -delete;
rm -rf ".git/"
