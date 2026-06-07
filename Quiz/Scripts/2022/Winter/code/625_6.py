try:
    a,b,c=9,4,5
    def f(b):
        global c
        a=2
        b*=1
        c=4
        return a+b+c
    
    a,b,c=3,2,1
    print(f(a),a,b,c)
    
except: print('error')
