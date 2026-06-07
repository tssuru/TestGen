try:
    a,b,c=5,4,2
    def f(b):
        global c
        a=4
        b=2
        c=5
        return a+b+c
    
    a,b,c=0,6,9
    print(f(a),a,b,c)
    
except: print('error')
