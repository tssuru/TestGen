try:
    a,b,c=3,9,7
    def f(a):
        a=1
        b=4
        c=3
        return a+b+c
    
    a,b,c=4,1,5
    print(f(a),a,b,c)
except: print('error')
