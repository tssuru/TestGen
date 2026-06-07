try:
    a,b,c=8,6,0
    def f(b):
        global c
        a=4
        b*=4
        c=5
        return a+b+c
    
    a,b,c=7,4,3
    print(f(a),a,b,c)
    
except: print('error')
