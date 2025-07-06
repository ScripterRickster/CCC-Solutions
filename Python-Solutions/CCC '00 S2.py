streams = []
beginStreams = int(input())
for i in range(beginStreams):
    streams.append(int(input()))

def split(num,percent):
    currStreams = streams

    num1,num2 = currStreams[num-1] * (percent/100),currStreams[num-1]-(currStreams[num-1] * (percent/100))
    num1,num2 = round(num1),round(num2)
    del currStreams[num-1]
    currStreams.insert(num-1,num1)
    currStreams.insert(num,num2)
    return currStreams

def merge(num):
    currStreams = streams
    currStreams[num] = currStreams[num] + currStreams[num-1]
    del currStreams[num-1]
    return currStreams


while True:
    action = int(input())
    if action == 99:
        a,b = 0,0
        for i in range(2):
            if i == 0:
                a = int(input())
            else:
                b = int(input())
        streams = split(a,b)
    elif action == 88:
        s = int(input())
        streams = merge(s)
    elif action == 77:
        break

print(' '.join([str(elem) for elem in streams]))
