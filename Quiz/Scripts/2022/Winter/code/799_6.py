try:
    a,b,c=1,3,9
    def h(b):
        a=1
        b-=3
        c=5
        return a+b+c
    
    a,b,c=5,4,0
    print(h(a),a,b,c)
    
except: print('error')
