try:
    a,b,c=0,1,3
    def h(a):
        a*=5
        b=4
        c=2
        return a+b+c
    
    a,b,c=5,9,2
    print(h(a),a,b,c)
    
except: print('error')
