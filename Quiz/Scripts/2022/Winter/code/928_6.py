try:
    a,b,c=0,6,7
    def f(b):
        global c
        a*=2
        b=4
        c=3
        return a+b+c
    
    a,b,c=4,9,5
    print(f(a),a,b,c)
    
except: print('error')
