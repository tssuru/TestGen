try:
    a,b,c=4,9,8
    def f(a):
        global c
        a=3
        b=5
        c=1
        return a+b+c
    
    a,b,c=7,7,2
    print(f(a),a,b,c)
    
except: print('error')
