try:
    a,b,c=0,3,2
    def h(a):
        a=3
        b*=2
        c=4
        return a+b+c
    
    a,b,c=5,1,0
    print(h(a),a,b,c)
    
except: print('error')
