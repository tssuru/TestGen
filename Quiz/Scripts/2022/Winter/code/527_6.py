try:
    a,b,c=4,3,5
    def f(b):
        global c
        a=2
        b=3
        c=4
        return a+b+c
    
    a,b,c=7,4,0
    print(f(a),a,b,c)
    
except: print('error')
