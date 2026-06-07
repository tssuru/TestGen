try:
    a,b,c=6,1,3
    def h(a):
        a+=3
        b=2
        c=4
        return a+b+c
    
    a,b,c=0,2,9
    print(h(a),a,b,c)
    
except: print('error')
