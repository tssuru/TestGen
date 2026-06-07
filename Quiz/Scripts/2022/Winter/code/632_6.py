try:
    a,b,c=8,7,7
    def f(a):
        global c
        a=5
        b=2
        c=5
        return a+b+c
    
    a,b,c=5,6,1
    print(f(a),a,b,c)
    
except: print('error')
