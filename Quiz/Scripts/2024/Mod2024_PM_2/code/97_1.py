try:
    a,b,c=0,3,7
    def h(a):
        a*=4
        b=1
        c=4
        return a+b+c
    
    a,b,c=5,6,1
    print(h(a),a,b,c)
    
except: print('error')
