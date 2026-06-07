try:
    a,b,c=7,8,2
    def f(b):
        global c
        a=5
        b=4
        c=3
        return a+b+c
    
    a,b,c=1,0,5
    print(f(a),a,b,c)
    
except: print('error')
