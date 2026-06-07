try:
    a,b,c=3,2,5
    def f(a):
        global c
        a=1
        b=4
        c=5
        return a+b+c
    
    a,b,c=9,8,6
    print(f(a),a,b,c)
    
except: print('error')
