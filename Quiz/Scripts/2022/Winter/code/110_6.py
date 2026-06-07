try:
    a,b,c=1,2,6
    def f(a):
        global c
        a=4
        b=2
        c=1
        return a+b+c
    
    a,b,c=0,5,7
    print(f(a),a,b,c)
    
except: print('error')
