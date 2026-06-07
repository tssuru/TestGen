try:
    a,b,c=7,3,9
    def h(a):
        a=2
        b-=5
        c=1
        return a+b+c
    
    a,b,c=8,4,2
    print(h(a),a,b,c)
    
except: print('error')
