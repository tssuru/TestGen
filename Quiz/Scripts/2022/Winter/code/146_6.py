try:
    a,b,c=2,4,3
    def h(a):
        a=2
        b=3
        c=4
        return a+b+c
    
    a,b,c=8,1,9
    print(h(a),a,b,c)
    
except: print('error')
