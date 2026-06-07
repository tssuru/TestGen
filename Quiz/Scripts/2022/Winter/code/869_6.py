try:
    a,b,c=0,2,8
    def f(b):
        global c
        a=4
        b=2
        c=1
        return a+b+c
    
    a,b,c=7,5,9
    print(f(a),a,b,c)
    
except: print('error')
