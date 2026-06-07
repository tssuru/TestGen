try:
    a,b,c=4,5,0
    def h(a):
        a=2
        b-=3
        c=4
        return a+b+c
    
    a,b,c=3,2,6
    print(h(a),a,b,c)
    
except: print('error')
