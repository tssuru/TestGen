try:
    a,b,c=7,2,6
    def f(b):
        global c
        a=4
        b=1
        c=2
        return a+b+c
    
    a,b,c=8,9,4
    print(f(a),a,b,c)
    
except: print('error')
