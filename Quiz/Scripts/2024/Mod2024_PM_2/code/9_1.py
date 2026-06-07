try:
    a,b,c=7,6,3
    def f(b):
        a-=3
        b=1
        c=2
        return a+b+c
    
    a,b,c=8,6,2
    print(f(a),a,b,c)
    
except: print('error')
