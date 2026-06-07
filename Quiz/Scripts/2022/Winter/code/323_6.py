try:
    a,b,c=2,9,6
    def g(b):
        a=2
        b*=1
        c=4
        return a+b+c
    
    a,b,c=7,1,5
    print(g(a),a,b,c)
    
except: print('error')
