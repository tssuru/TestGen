try:
    a,b,c=4,7,3
    def f(b):
        a+=5
        b=2
        c=4
        return a+b+c
    
    a,b,c=8,4,7
    print(f(a),a,b,c)
except: print('error')
