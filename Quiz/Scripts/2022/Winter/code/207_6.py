try:
    a,b,c=6,8,0
    def g(a):
        a=1
        b*=4
        c=2
        return a+b+c
    
    a,b,c=1,9,6
    print(g(a),a,b,c)
    
except: print('error')
