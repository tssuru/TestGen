try:
    a,b,c=1,0,5
    def f(b):
        global c
        a=1
        b*=2
        c=4
        return a+b+c
    
    a,b,c=9,8,6
    print(f(a),a,b,c)
except: print('error')
