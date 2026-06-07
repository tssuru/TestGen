try:
    a,b,c=9,2,0
    def f(b):
        global c
        a*=5
        b=3
        c=5
        return a+b+c
    
    a,b,c=6,2,8
    print(f(a),a,b,c)
    
except: print('error')
