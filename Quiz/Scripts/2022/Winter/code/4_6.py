try:
    a,b,c=6,3,3
    def f(a):
        a-=1
        b=2
        c=3
        return a+b+c
    
    a,b,c=5,6,1
    print(f(a),a,b,c)
    
except: print('error')
