try:
    a,b,c=6,7,4
    def f(b):
        a*=1
        b=1
        c=3
        return a+b+c
    
    a,b,c=5,8,2
    print(f(a),a,b,c)
except: print('error')
