try:
    a,b,c=4,0,7
    def f(b):
        global c
        a=3
        b*=4
        c=4
        return a+b+c
    
    a,b,c=3,6,4
    print(f(a),a,b,c)
    
except: print('error')
