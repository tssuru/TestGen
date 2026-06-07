try:
    a,b,c=5,3,7
    def f(a):
        global c
        a-=2
        b=2
        c=1
        return a+b+c
    
    a,b,c=0,4,3
    print(f(a),a,b,c)
    
except: print('error')
