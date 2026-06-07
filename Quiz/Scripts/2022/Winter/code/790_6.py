try:
    a,b,c=1,8,0
    def f(b):
        a*=5
        b=3
        c=2
        return a+b+c
    
    a,b,c=6,4,5
    print(f(a),a,b,c)
    
except: print('error')
