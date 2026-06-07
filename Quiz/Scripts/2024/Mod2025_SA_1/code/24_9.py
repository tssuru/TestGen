try:
    a,b,c=1,5,9
    def g(a):
        a=4
        b=5
        c=2
        return a+b+c
    
    a,b,c=0,7,3
    print(g(a),a,b,c)
except: print('error')
