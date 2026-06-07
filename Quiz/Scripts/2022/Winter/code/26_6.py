try:
    a,b,c=4,1,7
    def f(b):
        global c
        a=4
        b=3
        c=2
        return a+b+c
    
    a,b,c=8,0,6
    print(f(a),a,b,c)
    
except: print('error')
