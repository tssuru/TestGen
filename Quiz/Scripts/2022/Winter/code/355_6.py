try:
    a,b,c=8,0,3
    def f(b):
        global c
        a=5
        b*=1
        c=4
        return a+b+c
    
    a,b,c=7,1,6
    print(f(a),a,b,c)
    
except: print('error')
