try:
    a,b,c=6,5,1
    def f(b):
        global c
        a=5
        b=4
        c=1
        return a+b+c
    
    a,b,c=7,8,2
    print(f(a),a,b,c)
    
except: print('error')
