try:
    a,b,c=7,6,8
    def f(b):
        global c
        a-=3
        b=1
        c=5
        return a+b+c
    
    a,b,c=9,0,3
    print(f(a),a,b,c)
    
except: print('error')
