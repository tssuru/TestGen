try:
    a,b,c=4,2,5
    def h(a):
        a*=5
        b=2
        c=4
        return a+b+c
    
    a,b,c=0,5,7
    print(h(a),a,b,c)
    
except: print('error')
