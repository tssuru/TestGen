try:
    a,b,c=4,1,9
    def h(a):
        a=2
        b-=5
        c=4
        return a+b+c
    
    a,b,c=5,0,2
    print(h(a),a,b,c)
    
except: print('error')
