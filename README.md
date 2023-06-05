# cat.c

만약 명령줄 인수가 없다면 표준 입력을 사용합니다.

그렇지 않다면 fopen(argv[1], "r"); 를 통해 read 전용의 파일을 엽니다.

while문을 통해 EOF(end of file)까지 문자를 읽고 화면에 출력합니다.

![이미지](https://blogfiles.pstatic.net/MjAyMzA2MDVfMTQy/MDAxNjg1OTczNjQ0NDI4.w0srjSKzYVpOhC0TV2eOFbyyX9hD7p-NQSnjHw-xeWYg.s652GpQ4lO-UkK81sTQiTYYASj7j49RrYSG9z-YRh_og.PNG.saehee0427/image.png)
