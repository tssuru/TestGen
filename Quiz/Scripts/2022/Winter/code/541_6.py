try:
    a,b,c=4,8,1
    def f(a):
        global c
        a=3
        b=4
        c=1
        return a+b+c
    
    a,b,c=7,9,6
    print(f(a),a,b,c)
    
except: print('error')
