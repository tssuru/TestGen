try:
    a,b,c=1,5,7
    def f(b):
        global c
        a=4
        b=1
        c=2
        return a+b+c
    
    a,b,c=8,0,4
    print(f(a),a,b,c)
    
except: print('error')
