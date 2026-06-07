try:
    a,b,c=6,7,0
    def f(a):
        a=3
        b=2
        c=5
        return a+b+c
    
    a,b,c=4,8,5
    print(f(a),a,b,c)
    
except: print('error')
