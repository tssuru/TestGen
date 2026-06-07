try:
    a,b,c=6,7,8
    def f(b):
        global c
        a=5
        b*=4
        c=1
        return a+b+c
    
    a,b,c=1,5,3
    print(f(a),a,b,c)
    
except: print('error')
