try:
    a,b,c=5,7,9
    def h(a):
        a=4
        b-=3
        c=4
        return a+b+c
    
    a,b,c=8,3,6
    print(h(a),a,b,c)
    
except: print('error')
