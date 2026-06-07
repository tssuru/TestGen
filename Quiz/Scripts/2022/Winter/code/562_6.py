try:
    a,b,c=2,5,6
    def f(b):
        global c
        a=4
        b*=3
        c=1
        return a+b+c
    
    a,b,c=9,3,8
    print(f(a),a,b,c)
    
except: print('error')
