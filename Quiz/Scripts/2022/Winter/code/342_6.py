try:
    a,b,c=1,0,9
    def f(b):
        global c
        a=1
        b=5
        c=3
        return a+b+c
    
    a,b,c=8,6,2
    print(f(a),a,b,c)
    
except: print('error')
