try:
    a,b,c=0,4,5
    def h(a):
        a=1
        b=5
        c=3
        return a+b+c
    
    a,b,c=9,1,3
    print(h(a),a,b,c)
    
except: print('error')
