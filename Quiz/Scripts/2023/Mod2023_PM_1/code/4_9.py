try:
    a,b,c=0,9,9
    def g(a):
        a=4
        b*=4
        c=1
        return a+b+c
    
    a,b,c=0,6,5
    print(g(a),a,b,c)
    
except: print('error')
