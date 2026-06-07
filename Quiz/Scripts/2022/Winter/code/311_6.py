try:
    a,b,c=7,6,3
    def f(b):
        global c
        a=5
        b=3
        c=4
        return a+b+c
    
    a,b,c=5,2,0
    print(f(a),a,b,c)
    
except: print('error')
