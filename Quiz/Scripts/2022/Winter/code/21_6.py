try:
    a,b,c=1,8,0
    def f(b):
        global c
        a=4
        b=5
        c=1
        return a+b+c
    
    a,b,c=5,6,2
    print(f(a),a,b,c)
    
except: print('error')
